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

#ifndef ALIBABACLOUD_SAS_MODEL_GETASSETSPROPERTYDETAILRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_GETASSETSPROPERTYDETAILRESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT GetAssetsPropertyDetailResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct Property
				{
					std::string serverType;
					std::string user;
					std::string moduleName;
					int size;
					int usedByCount;
					std::string port;
					std::string ip;
					std::string intranetIp;
					std::string filepath;
					long processStarted;
					std::string internetIp;
					std::string listenProtocol;
					std::string containerName;
					std::string webPath;
					long createTimestamp;
					std::string path;
					std::string pathMode;
					std::string runtimeEnvVersion;
					std::string instanceId;
					std::string pid;
					std::string processStartedTime;
					std::string instanceName;
					std::string imageName;
					std::string uuid;
					std::string listenStatus;
					std::string listenIp;
					std::string regionId;
					long id;
					std::string domain;
				};


				GetAssetsPropertyDetailResult();
				explicit GetAssetsPropertyDetailResult(const std::string &payload);
				~GetAssetsPropertyDetailResult();
				std::vector<Property> getPropertys()const;
				PageInfo getPageInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Property> propertys_;
				PageInfo pageInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_GETASSETSPROPERTYDETAILRESULT_H_