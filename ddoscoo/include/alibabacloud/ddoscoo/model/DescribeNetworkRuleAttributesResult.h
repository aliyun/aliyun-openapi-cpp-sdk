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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBENETWORKRULEATTRIBUTESRESULT_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBENETWORKRULEATTRIBUTESRESULT_H_

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
			class ALIBABACLOUD_DDOSCOO_EXPORT DescribeNetworkRuleAttributesResult : public ServiceResult
			{
			public:
				struct NetworkRuleAttribute
				{
					struct Config
					{
						struct Sla
						{
							int cps;
							int cpsEnable;
							int maxconnEnable;
							int maxconn;
						};
						struct Slimit
						{
							int cpsMode;
							long pps;
							long bps;
							int cps;
							int cpsEnable;
							int maxconnEnable;
							int maxconn;
						};
						struct PayloadLen
						{
							int min;
							int max;
						};
						struct Cc
						{
							struct SblackItem
							{
								int type;
								int cnt;
								int expires;
								int during;
							};
							std::vector<SblackItem> sblack;
						};
						Cc cc;
						std::string nodataConn;
						int persistenceTimeout;
						PayloadLen payloadLen;
						Sla sla;
						Slimit slimit;
						std::string synproxy;
					};
					std::string instanceId;
					Config config;
					int frontendPort;
					std::string protocol;
				};


				DescribeNetworkRuleAttributesResult();
				explicit DescribeNetworkRuleAttributesResult(const std::string &payload);
				~DescribeNetworkRuleAttributesResult();
				std::vector<NetworkRuleAttribute> getNetworkRuleAttributes()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<NetworkRuleAttribute> networkRuleAttributes_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBENETWORKRULEATTRIBUTESRESULT_H_