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

#ifndef ALIBABACLOUD_SAS_MODEL_FINDCONTAINERNETWORKCONNECTRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_FINDCONTAINERNETWORKCONNECTRESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT FindContainerNetworkConnectResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					long totalCount;
					long pageSize;
					long currentPage;
					long count;
				};
				struct Connect
				{
					struct SrcContainer
					{
						std::string containerId;
					};
					struct DstContainer
					{
						std::string containerId;
					};
					long firstTime;
					std::string srcPort;
					SrcContainer srcContainer;
					std::string dstIp;
					DstContainer dstContainer;
					long id;
					std::string dstPort;
					std::string srcIp;
					long lastTime;
				};


				FindContainerNetworkConnectResult();
				explicit FindContainerNetworkConnectResult(const std::string &payload);
				~FindContainerNetworkConnectResult();
				PageInfo getPageInfo()const;
				std::vector<Connect> getConnects()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<Connect> connects_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_FINDCONTAINERNETWORKCONNECTRESULT_H_