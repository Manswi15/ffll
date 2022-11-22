pragma solidity >=0.7.0<0.9.0;
//SPDX-License-Identifier: GPL-3.0
//import "hardhat/console.sol";

contract studentdata{
    int256 public stdcnt=0;
    address owner;

    struct Student{
        int256 id;
        string fname;
        string lname;
        int256 marks;
    }
    mapping(int256=>Student)std;

    constructor(){
        owner=msg.sender;
    }

    modifier onlyowner(){
        require(owner==msg.sender);
        _;
    }

    function addstudent(int256 _id,
    string memory f,
    string memory l,
    int256 m)public onlyowner{
         stdcnt=stdcnt+1;
         std[stdcnt]=Student(_id,f,l,m);
    }

    fallback() external{
 //       console.log("fallback called");
     std[stdcnt].marks=0;
    }
}