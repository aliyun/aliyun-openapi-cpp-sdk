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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_LISTDPICONFIGERRORREQUEST_H_
#define ALIBABACLOUD_SMARTAG_MODEL_LISTDPICONFIGERRORREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT ListDpiConfigErrorRequest : public RpcServiceRequest
			{

			public:
				ListDpiConfigErrorRequest();
				~ListDpiConfigErrorRequest();

				std::string getDpiConfigType()const;
				void setDpiConfigType(const std::string& dpiConfigType);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::string getSmartAGId()const;
				void setSmartAGId(const std::string& smartAGId);
				std::string getRuleInstanceId()const;
				void setRuleInstanceId(const std::string& ruleInstanceId);
				int getMaxResults()const;
				void setMaxResults(int maxResults);

            private:
				std::string dpiConfigType_;
				std::string regionId_;
				std::string nextToken_;
				std::string smartAGId_;
				std::string ruleInstanceId_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_LISTDPICONFIGERRORREQUEST_H_