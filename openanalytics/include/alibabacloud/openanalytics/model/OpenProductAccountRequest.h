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

#ifndef ALIBABACLOUD_OPENANALYTICS_MODEL_OPENPRODUCTACCOUNTREQUEST_H_
#define ALIBABACLOUD_OPENANALYTICS_MODEL_OPENPRODUCTACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/openanalytics/OpenanalyticsExport.h>

namespace AlibabaCloud
{
	namespace Openanalytics
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENANALYTICS_EXPORT OpenProductAccountRequest : public RpcServiceRequest
			{

			public:
				OpenProductAccountRequest();
				~OpenProductAccountRequest();

				std::string getRegionID()const;
				void setRegionID(const std::string& regionID);
				std::string getProductCode()const;
				void setProductCode(const std::string& productCode);
				std::string getProductAccessKey()const;
				void setProductAccessKey(const std::string& productAccessKey);
				std::string getTargetUid()const;
				void setTargetUid(const std::string& targetUid);
				std::string getTargetArnRole()const;
				void setTargetArnRole(const std::string& targetArnRole);

            private:
				std::string regionID_;
				std::string productCode_;
				std::string productAccessKey_;
				std::string targetUid_;
				std::string targetArnRole_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENANALYTICS_MODEL_OPENPRODUCTACCOUNTREQUEST_H_