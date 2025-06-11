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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_UPDATEPROJECTCONFIGREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_UPDATEPROJECTCONFIGREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT UpdateProjectConfigRequest : public RpcServiceRequest {
public:
	struct CommonTransferConfig {
		std::string sinkStoreFormat;
		std::string sourceStoreFormat;
	};
	struct ReverseIncrTransferConfig {
		int throttleRps;
		std::string string;
		std::vector<std::string> supportDDLTypes;
		int throttleIOPS;
		std::string string;
		std::vector<std::string> recordTypeWhiteList;
		int incrSyncThreadCount;
	};
	struct FullTransferConfig {
		int indexDDLConcurrencyLimit;
		int throttleRps;
		int writeWorkerNum;
		int maxConcurrentIndexDDLs;
		int readWorkerNum;
		int throttleIOPS;
	};
	struct IncrTransferConfig {
		int throttleRps;
		std::string string;
		std::vector<std::string> supportDDLTypes;
		int throttleIOPS;
		std::string string;
		std::vector<std::string> recordTypeWhiteList;
		int incrSyncThreadCount;
	};
	UpdateProjectConfigRequest();
	~UpdateProjectConfigRequest();
	CommonTransferConfig getCommonTransferConfig() const;
	void setCommonTransferConfig(const CommonTransferConfig &commonTransferConfig);
	ReverseIncrTransferConfig getReverseIncrTransferConfig() const;
	void setReverseIncrTransferConfig(const ReverseIncrTransferConfig &reverseIncrTransferConfig);
	FullTransferConfig getFullTransferConfig() const;
	void setFullTransferConfig(const FullTransferConfig &fullTransferConfig);
	std::string getId() const;
	void setId(const std::string &id);
	IncrTransferConfig getIncrTransferConfig() const;
	void setIncrTransferConfig(const IncrTransferConfig &incrTransferConfig);

private:
	CommonTransferConfig commonTransferConfig_;
	ReverseIncrTransferConfig reverseIncrTransferConfig_;
	FullTransferConfig fullTransferConfig_;
	std::string id_;
	IncrTransferConfig incrTransferConfig_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_UPDATEPROJECTCONFIGREQUEST_H_
