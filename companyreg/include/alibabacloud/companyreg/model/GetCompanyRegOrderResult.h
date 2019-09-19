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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_GETCOMPANYREGORDERRESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_GETCOMPANYREGORDERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT GetCompanyRegOrderResult : public ServiceResult
			{
			public:
				struct BizOperation
				{
					std::string actionType;
					long gmtAction;
					std::string actionInfo;
				};


				GetCompanyRegOrderResult();
				explicit GetCompanyRegOrderResult(const std::string &payload);
				~GetCompanyRegOrderResult();
				std::string getBizInfo()const;
				std::string getOutboundPhone()const;
				std::string getSupplementBizInfo()const;
				long getGmtModified()const;
				std::string getBizStatus()const;
				std::string getBizStatusStage()const;
				std::string getPlatformName()const;
				std::string getCompanyName()const;
				std::string getAliyunOrderId()const;
				std::string getExtend()const;
				float getOrderAmount()const;
				long getGmtPaid()const;
				std::string getBizSubCode()const;
				std::vector<BizOperation> getOperations()const;
				std::string getBizId()const;
				float getYunMarketOrderAmount()const;
				std::string getInboundPhone()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string bizInfo_;
				std::string outboundPhone_;
				std::string supplementBizInfo_;
				long gmtModified_;
				std::string bizStatus_;
				std::string bizStatusStage_;
				std::string platformName_;
				std::string companyName_;
				std::string aliyunOrderId_;
				std::string extend_;
				float orderAmount_;
				long gmtPaid_;
				std::string bizSubCode_;
				std::vector<BizOperation> operations_;
				std::string bizId_;
				float yunMarketOrderAmount_;
				std::string inboundPhone_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_GETCOMPANYREGORDERRESULT_H_