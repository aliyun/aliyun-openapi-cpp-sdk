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

#ifndef ALIBABACLOUD_ARMS_MODEL_SEARCHALERTCONTACTGROUPREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_SEARCHALERTCONTACTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT SearchAlertContactGroupRequest : public RpcServiceRequest
			{

			public:
				SearchAlertContactGroupRequest();
				~SearchAlertContactGroupRequest();

				std::string getContactName()const;
				void setContactName(const std::string& contactName);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				long getContactId()const;
				void setContactId(long contactId);
				std::string getContactGroupName()const;
				void setContactGroupName(const std::string& contactGroupName);
				std::string getProxyUserId()const;
				void setProxyUserId(const std::string& proxyUserId);

            private:
				std::string contactName_;
				std::string regionId_;
				long contactId_;
				std::string contactGroupName_;
				std::string proxyUserId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_SEARCHALERTCONTACTGROUPREQUEST_H_