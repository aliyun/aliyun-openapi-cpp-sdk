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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEDAGCOMPLEMENTREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEDAGCOMPLEMENTREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateDagComplementRequest : public RpcServiceRequest {
public:
	CreateDagComplementRequest();
	~CreateDagComplementRequest();
	std::string getProjectEnv() const;
	void setProjectEnv(const std::string &projectEnv);
	std::string getStartBizDate() const;
	void setStartBizDate(const std::string &startBizDate);
	bool getParallelism() const;
	void setParallelism(bool parallelism);
	long getRootNodeId() const;
	void setRootNodeId(long rootNodeId);
	std::string getBizBeginTime() const;
	void setBizBeginTime(const std::string &bizBeginTime);
	std::string getEndBizDate() const;
	void setEndBizDate(const std::string &endBizDate);
	std::string getIncludeNodeIds() const;
	void setIncludeNodeIds(const std::string &includeNodeIds);
	std::string getBizEndTime() const;
	void setBizEndTime(const std::string &bizEndTime);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getExcludeNodeIds() const;
	void setExcludeNodeIds(const std::string &excludeNodeIds);
	std::string getNodeParams() const;
	void setNodeParams(const std::string &nodeParams);

private:
	std::string projectEnv_;
	std::string startBizDate_;
	bool parallelism_;
	long rootNodeId_;
	std::string bizBeginTime_;
	std::string endBizDate_;
	std::string includeNodeIds_;
	std::string bizEndTime_;
	std::string name_;
	std::string excludeNodeIds_;
	std::string nodeParams_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEDAGCOMPLEMENTREQUEST_H_
