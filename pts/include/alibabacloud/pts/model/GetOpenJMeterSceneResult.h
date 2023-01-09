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

#ifndef ALIBABACLOUD_PTS_MODEL_GETOPENJMETERSCENERESULT_H_
#define ALIBABACLOUD_PTS_MODEL_GETOPENJMETERSCENERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/pts/PTSExport.h>

namespace AlibabaCloud
{
	namespace PTS
	{
		namespace Model
		{
			class ALIBABACLOUD_PTS_EXPORT GetOpenJMeterSceneResult : public ServiceResult
			{
			public:
				struct Scene
				{
					struct BaseInfo
					{
						std::string modifyName;
						std::string resource;
						std::string createName;
						std::string principal;
						std::string operateType;
						std::string remark;
					};
					struct DnsCacheConfig
					{
						bool clearCacheEachIteration;
						std::vector<std::string> dnsServers;
						std::string hostTable;
					};
					struct FileListItem
					{
						std::string fileType;
						std::string fileName;
						bool splitCsv;
						long id;
						std::string fileOssAddress;
						std::string md5;
						long fileSize;
					};
					int steps;
					int maxRps;
					int agentCount;
					std::vector<FileListItem> fileList;
					int startRps;
					BaseInfo baseInfo;
					DnsCacheConfig dnsCacheConfig;
					std::string securityGroupId;
					std::string vSwitchId;
					std::string mode;
					int duration;
					bool isVpcTest;
					int startConcurrency;
					std::string sceneId;
					std::string environmentId;
					std::string sceneName;
					std::string vpcId;
					int concurrency;
					std::string testFile;
					std::string syncTimerType;
					int rampUp;
					std::string pool;
					std::string regionId;
					std::string constantThroughputTimerType;
				};


				GetOpenJMeterSceneResult();
				explicit GetOpenJMeterSceneResult(const std::string &payload);
				~GetOpenJMeterSceneResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Scene getScene()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Scene scene_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PTS_MODEL_GETOPENJMETERSCENERESULT_H_