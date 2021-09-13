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

#ifndef ALIBABACLOUD_LINKWAN_MODEL_COUNTOWNEDJOINPERMISSIONSREQUEST_H_
#define ALIBABACLOUD_LINKWAN_MODEL_COUNTOWNEDJOINPERMISSIONSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/linkwan/LinkWANExport.h>

namespace AlibabaCloud
{
	namespace LinkWAN
	{
		namespace Model
		{
			class ALIBABACLOUD_LINKWAN_EXPORT CountOwnedJoinPermissionsRequest : public RpcServiceRequest
			{

			public:
				CountOwnedJoinPermissionsRequest();
				~CountOwnedJoinPermissionsRequest();

				bool getEnabled()const;
				void setEnabled(bool enabled);
				std::string getFuzzyJoinEui()const;
				void setFuzzyJoinEui(const std::string& fuzzyJoinEui);
				std::string getFuzzyJoinPermissionName()const;
				void setFuzzyJoinPermissionName(const std::string& fuzzyJoinPermissionName);
				std::string getFuzzyRenterAliyunId()const;
				void setFuzzyRenterAliyunId(const std::string& fuzzyRenterAliyunId);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);

            private:
				bool enabled_;
				std::string fuzzyJoinEui_;
				std::string fuzzyJoinPermissionName_;
				std::string fuzzyRenterAliyunId_;
				std::string apiProduct_;
				std::string apiRevision_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINKWAN_MODEL_COUNTOWNEDJOINPERMISSIONSREQUEST_H_