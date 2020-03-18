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

#ifndef ALIBABACLOUD_ADDRESS_PURIFICATION_MODEL_GETREPORTREQUEST_H_
#define ALIBABACLOUD_ADDRESS_PURIFICATION_MODEL_GETREPORTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/address-purification/Address_purificationExport.h>

namespace AlibabaCloud
{
	namespace Address_purification
	{
		namespace Model
		{
			class ALIBABACLOUD_ADDRESS_PURIFICATION_EXPORT GetReportRequest : public RpcServiceRequest
			{

			public:
				GetReportRequest();
				~GetReportRequest();

				std::string getProductCode()const;
				void setProductCode(const std::string& productCode);
				std::string getReportType()const;
				void setReportType(const std::string& reportType);
				std::string getApiCode()const;
				void setApiCode(const std::string& apiCode);
				std::string getGranularity()const;
				void setGranularity(const std::string& granularity);
				std::string getCommodityCode()const;
				void setCommodityCode(const std::string& commodityCode);
				std::string getParameters()const;
				void setParameters(const std::string& parameters);

            private:
				std::string productCode_;
				std::string reportType_;
				std::string apiCode_;
				std::string granularity_;
				std::string commodityCode_;
				std::string parameters_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADDRESS_PURIFICATION_MODEL_GETREPORTREQUEST_H_