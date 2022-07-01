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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEPORTRESULT_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEPORTRESULT_H_

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
			class ALIBABACLOUD_DDOSCOO_EXPORT DescribePortResult : public ServiceResult
			{
			public:
				struct NetworkRule
				{
					bool isAutoCreate;
					std::string instanceId;
					int backendPort;
					std::vector<std::string> realServers;
					int frontendPort;
					std::string frontendProtocol;
				};


				DescribePortResult();
				explicit DescribePortResult(const std::string &payload);
				~DescribePortResult();
				std::vector<NetworkRule> getNetworkRules()const;
				long getTotalCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<NetworkRule> networkRules_;
				long totalCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEPORTRESULT_H_