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

#ifndef ALIBABACLOUD_EDAS_MODEL_GETMOCKRULEBYPROVIDERAPPIDRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_GETMOCKRULEBYPROVIDERAPPIDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT GetMockRuleByProviderAppIdResult : public ServiceResult
			{
			public:
				struct RuleItemList
				{
					std::string accountId;
					std::string consumerAppId;
					std::string scMockItemJson;
					std::string extraJson;
					std::string source;
					std::string name;
					std::string consumerAppName;
					std::string providerAppId;
					std::string providerAppName;
					bool enable;
					std::string region;
					long id;
					std::string namespaceId;
				};


				GetMockRuleByProviderAppIdResult();
				explicit GetMockRuleByProviderAppIdResult(const std::string &payload);
				~GetMockRuleByProviderAppIdResult();
				std::string getHttpCode()const;
				std::string getMessage()const;
				std::vector<RuleItemList> getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string httpCode_;
				std::string message_;
				std::vector<RuleItemList> data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_GETMOCKRULEBYPROVIDERAPPIDRESULT_H_