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

#ifndef ALIBABACLOUD_PTS_MODEL_SAVEOPENJMETERSCENEREQUEST_H_
#define ALIBABACLOUD_PTS_MODEL_SAVEOPENJMETERSCENEREQUEST_H_

#include <alibabacloud/pts/PTSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace PTS {
namespace Model {
class ALIBABACLOUD_PTS_EXPORT SaveOpenJMeterSceneRequest : public RpcServiceRequest {
public:
	struct OpenJMeterScene {
		int startConcurrency;
		std::string testFile;
		std::string constantThroughputTimerType;
		std::string sceneName;
		std::string securityGroupId;
		struct FileListItem {
			std::string fileName;
			bool splitCsv;
			long fileSize;
			std::string fileOssAddress;
			std::string md5;
			long fileId;
			std::string tags;
		};
		FileListItem fileListItem;
		std::vector<FileListItem> fileList;
		int steps;
		int startRps;
		int concurrency;
		int duration;
		int agentCount;
		std::string vSwitchId;
		std::string mode;
		bool isVpcTest;
		std::string environmentId;
		std::string regionId;
		std::string vpcId;
		std::string sceneId;
		std::string jmeterPluginLabel;
		struct DnsCacheConfig {
			bool clearCacheEachIteration;
			std::string string;
			std::vector<std::string> dnsServers;
			std::map<std::string, std::string> hostTable;
		};
		DnsCacheConfig dnsCacheConfig;
		struct JMeterPropertiesItem {
			std::string name;
			std::string value;
		};
		JMeterPropertiesItem jMeterPropertiesItem;
		std::vector<JMeterPropertiesItem> jMeterProperties;
		std::string syncTimerType;
		int maxRps;
		int rampUp;
	};
	SaveOpenJMeterSceneRequest();
	~SaveOpenJMeterSceneRequest();
	OpenJMeterScene getOpenJMeterScene() const;
	void setOpenJMeterScene(const OpenJMeterScene &openJMeterScene);

private:
	OpenJMeterScene openJMeterScene_;
};
} // namespace Model
} // namespace PTS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PTS_MODEL_SAVEOPENJMETERSCENEREQUEST_H_
