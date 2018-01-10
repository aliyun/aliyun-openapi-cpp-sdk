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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBERULEATTRIBUTERESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBERULEATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT DescribeRuleAttributeResult : public ServiceResult
			{
			public:


				DescribeRuleAttributeResult();
				explicit DescribeRuleAttributeResult(const std::string &payload);
				~DescribeRuleAttributeResult();
				std::string getListenerPort()const;
				void setListenerPort(const std::string& listenerPort);
				std::string getVServerGroupId()const;
				void setVServerGroupId(const std::string& vServerGroupId);
				std::string getLoadBalancerId()const;
				void setLoadBalancerId(const std::string& loadBalancerId);
				std::string getDomain()const;
				void setDomain(const std::string& domain);
				std::string getRuleName()const;
				void setRuleName(const std::string& ruleName);
				std::string getUrl()const;
				void setUrl(const std::string& url);

			protected:
				void parse(const std::string &payload);
			private:
				std::string listenerPort_;
				std::string vServerGroupId_;
				std::string loadBalancerId_;
				std::string domain_;
				std::string ruleName_;
				std::string url_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBERULEATTRIBUTERESULT_H_