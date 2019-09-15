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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEWHITELISTEFFECTIVEASSETSREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEWHITELISTEFFECTIVEASSETSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeWhiteListEffectiveAssetsRequest : public RpcServiceRequest
			{

			public:
				DescribeWhiteListEffectiveAssetsRequest();
				~DescribeWhiteListEffectiveAssetsRequest();

				std::string getRemark()const;
				void setRemark(const std::string& remark);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				long getStrategyId()const;
				void setStrategyId(long strategyId);
				int getNeedStatistics()const;
				void setNeedStatistics(int needStatistics);

            private:
				std::string remark_;
				std::string sourceIp_;
				int pageSize_;
				std::string lang_;
				int currentPage_;
				long strategyId_;
				int needStatistics_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEWHITELISTEFFECTIVEASSETSREQUEST_H_