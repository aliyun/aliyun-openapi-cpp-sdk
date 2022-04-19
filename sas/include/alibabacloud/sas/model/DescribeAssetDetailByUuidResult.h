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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEASSETDETAILBYUUIDRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEASSETDETAILBYUUIDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeAssetDetailByUuidResult : public ServiceResult
			{
			public:
				struct AssetDetail
				{
					std::string groupTrace;
					bool bind;
					std::string os;
					long memory;
					std::string ip;
					int cpu;
					std::string clientVersion;
					std::string osDetail;
					std::string intranetIp;
					std::vector<std::string> diskInfoList;
					long authModifyTime;
					std::string internetIp;
					std::string regionName;
					std::string instanceStatus;
					std::string kernel;
					std::string hostName;
					std::string clientStatus;
					std::string cpuInfo;
					std::string instanceId;
					std::vector<std::string> ipList;
					long createTime;
					std::string osName;
					std::string sysInfo;
					int flag;
					std::string instanceName;
					std::vector<std::string> macList;
					std::string assetType;
					std::string uuid;
					int mem;
					std::string region;
					std::string vpcInstanceId;
					std::string tag;
					std::string regionId;
					int authVersion;
				};


				DescribeAssetDetailByUuidResult();
				explicit DescribeAssetDetailByUuidResult(const std::string &payload);
				~DescribeAssetDetailByUuidResult();
				AssetDetail getAssetDetail()const;

			protected:
				void parse(const std::string &payload);
			private:
				AssetDetail assetDetail_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEASSETDETAILBYUUIDRESULT_H_