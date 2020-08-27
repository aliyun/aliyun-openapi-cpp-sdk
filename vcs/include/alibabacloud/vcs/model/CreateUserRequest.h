/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_VCS_MODEL_CREATEUSERREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_CREATEUSERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT CreateUserRequest : public RpcServiceRequest
			{

			public:
				CreateUserRequest();
				~CreateUserRequest();

				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				int getGender()const;
				void setGender(int gender);
				std::string getPlateNo()const;
				void setPlateNo(const std::string& plateNo);
				std::string getIdNumber()const;
				void setIdNumber(const std::string& idNumber);
				std::string getFaceImageUrl()const;
				void setFaceImageUrl(const std::string& faceImageUrl);
				std::string getAttachment()const;
				void setAttachment(const std::string& attachment);
				std::string getIsvSubId()const;
				void setIsvSubId(const std::string& isvSubId);
				std::string getAddress()const;
				void setAddress(const std::string& address);
				long getUserGroupId()const;
				void setUserGroupId(long userGroupId);
				std::string getPhoneNo()const;
				void setPhoneNo(const std::string& phoneNo);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				int getAge()const;
				void setAge(int age);
				std::string getUserName()const;
				void setUserName(const std::string& userName);

            private:
				std::string corpId_;
				int gender_;
				std::string plateNo_;
				std::string idNumber_;
				std::string faceImageUrl_;
				std::string attachment_;
				std::string isvSubId_;
				std::string address_;
				long userGroupId_;
				std::string phoneNo_;
				std::string bizId_;
				int age_;
				std::string userName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_CREATEUSERREQUEST_H_