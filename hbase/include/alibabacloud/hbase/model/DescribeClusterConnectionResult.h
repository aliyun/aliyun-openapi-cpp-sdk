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

#ifndef ALIBABACLOUD_HBASE_MODEL_DESCRIBECLUSTERCONNECTIONRESULT_H_
#define ALIBABACLOUD_HBASE_MODEL_DESCRIBECLUSTERCONNECTIONRESULT_H_

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
			class ALIBABACLOUD_HBASE_EXPORT DescribeClusterConnectionResult : public ServiceResult
			{
			public:
				struct UiProxyConnAddrInfo
				{
					std::string connAddrPort;
					std::string connAddr;
					std::string netType;
				};
				struct ThriftConn
				{
					std::string connAddrPort;
					std::string connAddr;
					std::string netType;
				};
				struct ZkConnAddr
				{
					std::string connAddrPort;
					std::string connAddr;
					std::string netType;
				};
				struct SlbConnAddr
				{
					struct ConnAddrInfo
					{
						std::string connAddrPort;
						std::string connAddr;
						std::string netType;
					};
					ConnAddrInfo connAddrInfo;
					std::string slbType;
				};
				struct ServiceConnAddr
				{
					struct ConnAddrInfo1
					{
						std::string connAddrPort;
						std::string connAddr;
						std::string netType;
					};
					std::string connType;
					ConnAddrInfo1 connAddrInfo1;
				};


				DescribeClusterConnectionResult();
				explicit DescribeClusterConnectionResult(const std::string &payload);
				~DescribeClusterConnectionResult();
				std::string getIsMultimod()const;
				UiProxyConnAddrInfo getUiProxyConnAddrInfo()const;
				std::string getVpcId()const;
				std::string getVSwitchId()const;
				std::vector<ServiceConnAddr> getServiceConnAddrs()const;
				std::string getNetType()const;
				ThriftConn getThriftConn()const;
				std::string getDbType()const;
				std::vector<ZkConnAddr> getZkConnAddrs()const;
				std::vector<SlbConnAddr> getSlbConnAddrs()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string isMultimod_;
				UiProxyConnAddrInfo uiProxyConnAddrInfo_;
				std::string vpcId_;
				std::string vSwitchId_;
				std::vector<ServiceConnAddr> serviceConnAddrs_;
				std::string netType_;
				ThriftConn thriftConn_;
				std::string dbType_;
				std::vector<ZkConnAddr> zkConnAddrs_;
				std::vector<SlbConnAddr> slbConnAddrs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_DESCRIBECLUSTERCONNECTIONRESULT_H_