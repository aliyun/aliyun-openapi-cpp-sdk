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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEASSETDETAILBYUUIDRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEASSETDETAILBYUUIDRESULT_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT DescribeAssetDetailByUuidResult : public ServiceResult
			{
			public:
				struct AssetDetail
				{
					std::string groupTrace;
					std::string clientStatus;
					std::string os;
					int instanceId;
					std::string cpuInfo;
					std::vector<std::string> ipList;
					std::string ip;
					int cpu;
					std::string sysInfo;
					std::string intranetIp;
					std::string osDetail;
					std::vector<std::string> diskInfoList;
					int instanceName;
					std::vector<std::string> macList;
					std::string assetType;
					std::string uuid;
					std::string internetIp;
					int mem;
					std::string regionName;
					std::string region;
					std::string tag;
					std::string kernel;
					std::string hostName;
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
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEASSETDETAILBYUUIDRESULT_H_