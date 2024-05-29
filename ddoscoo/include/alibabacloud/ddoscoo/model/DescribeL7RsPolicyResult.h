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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEL7RSPOLICYRESULT_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEL7RSPOLICYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ddoscoo/DdoscooExport.h>

namespace AlibabaCloud
{
	namespace Ddoscoo
	{
		namespace Model
		{
			class ALIBABACLOUD_DDOSCOO_EXPORT DescribeL7RsPolicyResult : public ServiceResult
			{
			public:
				struct AttributeItem
				{
					struct Attribute
					{
						int connectTimeout;
						int maxFails;
						int failTimeout;
						std::string mode;
						int readTimeout;
						int sendTimeout;
						int weight;
					};
					std::string realServer;
					int rsType;
					Attribute attribute;
				};


				DescribeL7RsPolicyResult();
				explicit DescribeL7RsPolicyResult(const std::string &payload);
				~DescribeL7RsPolicyResult();
				int getUpstreamRetry()const;
				std::vector<AttributeItem> getAttributes()const;
				std::string getProxyMode()const;

			protected:
				void parse(const std::string &payload);
			private:
				int upstreamRetry_;
				std::vector<AttributeItem> attributes_;
				std::string proxyMode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEL7RSPOLICYRESULT_H_