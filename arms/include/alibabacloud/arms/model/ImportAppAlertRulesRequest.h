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

#ifndef ALIBABACLOUD_ARMS_MODEL_IMPORTAPPALERTRULESREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_IMPORTAPPALERTRULESREQUEST_H_

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
			class ALIBABACLOUD_ARMS_EXPORT ImportAppAlertRulesRequest : public RpcServiceRequest
			{

			public:
				ImportAppAlertRulesRequest();
				~ImportAppAlertRulesRequest();

				bool getIsAutoStart()const;
				void setIsAutoStart(bool isAutoStart);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getContactGroupIds()const;
				void setContactGroupIds(const std::string& contactGroupIds);
				std::string getPids()const;
				void setPids(const std::string& pids);
				std::string getTemplateAlertId()const;
				void setTemplateAlertId(const std::string& templateAlertId);

            private:
				bool isAutoStart_;
				std::string regionId_;
				std::string contactGroupIds_;
				std::string pids_;
				std::string templateAlertId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_IMPORTAPPALERTRULESREQUEST_H_