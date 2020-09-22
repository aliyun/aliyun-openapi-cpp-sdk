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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBEGROUPSRESULT_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBEGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT DescribeGroupsResult : public ServiceResult
			{
			public:
				struct Group
				{
					struct Stats
					{
						long ipcNum;
						long iedNum;
						long deviceNum;
						long platformNum;
					};
					std::string app;
					std::string inProtocol;
					std::string description;
					std::string createdTime;
					std::string name;
					std::vector<std::string> gbUdpPorts;
					int captureInterval;
					std::string gbId;
					std::string pushDomain;
					std::string aliasId;
					int captureImage;
					std::string status;
					std::string captureOssPath;
					std::string gbIp;
					bool enabled;
					std::string outProtocol;
					bool lazyPull;
					long gbPort;
					std::string callback;
					int captureVideo;
					std::string playDomain;
					Stats stats;
					std::string region;
					std::string captureOssBucket;
					std::vector<std::string> gbTcpPorts;
					std::string id;
				};


				DescribeGroupsResult();
				explicit DescribeGroupsResult(const std::string &payload);
				~DescribeGroupsResult();
				long getTotalCount()const;
				long getPageSize()const;
				long getPageNum()const;
				long getPageCount()const;
				std::vector<Group> getGroups()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				long pageNum_;
				long pageCount_;
				std::vector<Group> groups_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBEGROUPSRESULT_H_