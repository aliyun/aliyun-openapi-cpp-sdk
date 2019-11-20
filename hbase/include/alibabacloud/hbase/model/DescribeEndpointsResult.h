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

#ifndef ALIBABACLOUD_HBASE_MODEL_DESCRIBEENDPOINTSRESULT_H_
#define ALIBABACLOUD_HBASE_MODEL_DESCRIBEENDPOINTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT DescribeEndpointsResult : public ServiceResult
			{
			public:
				struct ConnAddrInfo
				{
					std::string connAddrPort;
					std::string connAddr;
					std::string connType;
					std::string netType;
				};


				DescribeEndpointsResult();
				explicit DescribeEndpointsResult(const std::string &payload);
				~DescribeEndpointsResult();
				std::string getVpcId()const;
				std::vector<ConnAddrInfo> getConnAddrs()const;
				std::string getVSwitchId()const;
				std::string getNetType()const;
				std::string getEngine()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string vpcId_;
				std::vector<ConnAddrInfo> connAddrs_;
				std::string vSwitchId_;
				std::string netType_;
				std::string engine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_DESCRIBEENDPOINTSRESULT_H_