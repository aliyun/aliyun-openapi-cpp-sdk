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

#ifndef ALIBABACLOUD_DTS_MODEL_TRANSFERPAYTYPEREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_TRANSFERPAYTYPEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT TransferPayTypeRequest : public RpcServiceRequest
			{

			public:
				TransferPayTypeRequest();
				~TransferPayTypeRequest();

				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				std::string getBuyCount()const;
				void setBuyCount(const std::string& buyCount);
				std::string getInstanceClass()const;
				void setInstanceClass(const std::string& instanceClass);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDtsJobId()const;
				void setDtsJobId(const std::string& dtsJobId);
				std::string getChargeType()const;
				void setChargeType(const std::string& chargeType);

            private:
				std::string period_;
				std::string buyCount_;
				std::string instanceClass_;
				std::string regionId_;
				std::string dtsJobId_;
				std::string chargeType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_TRANSFERPAYTYPEREQUEST_H_