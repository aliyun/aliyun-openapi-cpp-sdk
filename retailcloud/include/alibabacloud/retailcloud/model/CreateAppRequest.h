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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEAPPREQUEST_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEAPPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT CreateAppRequest : public RpcServiceRequest
			{
			public:
				struct UserRoles
				{
					std::string roleName;
					std::string userType;
					std::string userId;
				};

			public:
				CreateAppRequest();
				~CreateAppRequest();

				std::string getBizTitle()const;
				void setBizTitle(const std::string& bizTitle);
				std::string getOperatingSystem()const;
				void setOperatingSystem(const std::string& operatingSystem);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getLanguage()const;
				void setLanguage(const std::string& language);
				std::string getTitle()const;
				void setTitle(const std::string& title);
				std::string getGroupName()const;
				void setGroupName(const std::string& groupName);
				std::vector<int> getMiddleWareIdList()const;
				void setMiddleWareIdList(const std::vector<int>& middleWareIdList);
				int getStateType()const;
				void setStateType(int stateType);
				std::string getServiceType()const;
				void setServiceType(const std::string& serviceType);
				std::vector<UserRoles> getUserRoles()const;
				void setUserRoles(const std::vector<UserRoles>& userRoles);
				std::string getBizCode()const;
				void setBizCode(const std::string& bizCode);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);

            private:
				std::string bizTitle_;
				std::string operatingSystem_;
				std::string description_;
				std::string language_;
				std::string title_;
				std::string groupName_;
				std::vector<int> middleWareIdList_;
				int stateType_;
				std::string serviceType_;
				std::vector<UserRoles> userRoles_;
				std::string bizCode_;
				std::string _namespace_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_CREATEAPPREQUEST_H_