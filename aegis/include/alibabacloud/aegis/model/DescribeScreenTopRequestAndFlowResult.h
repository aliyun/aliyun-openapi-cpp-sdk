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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBESCREENTOPREQUESTANDFLOWRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBESCREENTOPREQUESTANDFLOWRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeScreenTopRequestAndFlowResult : public ServiceResult
			{
			public:
				struct TopRequestsIpCountDOSItem
				{
					std::string ip;
					int reqCount;
				};


				DescribeScreenTopRequestAndFlowResult();
				explicit DescribeScreenTopRequestAndFlowResult(const std::string &payload);
				~DescribeScreenTopRequestAndFlowResult();
				int getNormalFlow()const;
				std::vector<TopRequestsIpCountDOSItem> getTopRequestsIpCountDOS()const;
				bool getSuccess()const;
				int getAbnormalFlow()const;

			protected:
				void parse(const std::string &payload);
			private:
				int normalFlow_;
				std::vector<TopRequestsIpCountDOSItem> topRequestsIpCountDOS_;
				bool success_;
				int abnormalFlow_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBESCREENTOPREQUESTANDFLOWRESULT_H_