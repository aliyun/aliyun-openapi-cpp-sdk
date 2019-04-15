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

#ifndef ALIBABACLOUD_AEGIS_MODEL_UPDATEWHITELISTPROCESSSTATUSREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_UPDATEWHITELISTPROCESSSTATUSREQUEST_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT UpdateWhiteListProcessStatusRequest : public RpcServiceRequest
			{

			public:
				UpdateWhiteListProcessStatusRequest();
				~UpdateWhiteListProcessStatusRequest();

				std::string getProcessIds()const;
				void setProcessIds(const std::string& processIds);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				long getStrategyId()const;
				void setStrategyId(long strategyId);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getStatus()const;
				void setStatus(int status);

            private:
				std::string processIds_;
				std::string sourceIp_;
				long strategyId_;
				std::string lang_;
				int status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_UPDATEWHITELISTPROCESSSTATUSREQUEST_H_