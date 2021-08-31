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

#ifndef ALIBABACLOUD_EDAS_MODEL_QUERYREGIONCONFIGRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_QUERYREGIONCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT QueryRegionConfigResult : public ServiceResult
			{
			public:
				struct RegionConfig
				{
					struct FileServerConfig
					{
						std::string internalUrl;
						std::string bucket;
						std::string publicUrl;
						std::string vpcUrl;
					};
					int no;
					std::string fileServerType;
					std::string agentInstallScript;
					std::string addressServerHost;
					std::string imageId;
					FileServerConfig fileServerConfig;
					std::string id;
					std::string tag;
					std::string name;
				};


				QueryRegionConfigResult();
				explicit QueryRegionConfigResult(const std::string &payload);
				~QueryRegionConfigResult();
				std::string getMessage()const;
				RegionConfig getRegionConfig()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				RegionConfig regionConfig_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_QUERYREGIONCONFIGRESULT_H_