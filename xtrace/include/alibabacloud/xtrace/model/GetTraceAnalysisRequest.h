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

#ifndef ALIBABACLOUD_XTRACE_MODEL_GETTRACEANALYSISREQUEST_H_
#define ALIBABACLOUD_XTRACE_MODEL_GETTRACEANALYSISREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/xtrace/XtraceExport.h>

namespace AlibabaCloud
{
	namespace Xtrace
	{
		namespace Model
		{
			class ALIBABACLOUD_XTRACE_EXPORT GetTraceAnalysisRequest : public RpcServiceRequest
			{

			public:
				GetTraceAnalysisRequest();
				~GetTraceAnalysisRequest();

				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getQuery()const;
				void setQuery(const std::string& query);
				std::string getApi()const;
				void setApi(const std::string& api);
				std::string getProxyUserId()const;
				void setProxyUserId(const std::string& proxyUserId);

            private:
				std::string regionId_;
				std::string query_;
				std::string api_;
				std::string proxyUserId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_XTRACE_MODEL_GETTRACEANALYSISREQUEST_H_