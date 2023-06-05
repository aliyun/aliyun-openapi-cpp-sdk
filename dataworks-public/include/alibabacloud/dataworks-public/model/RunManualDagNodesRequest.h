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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_RUNMANUALDAGNODESREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_RUNMANUALDAGNODESREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT RunManualDagNodesRequest : public RpcServiceRequest {
public:
	RunManualDagNodesRequest();
	~RunManualDagNodesRequest();
	std::string getProjectEnv() const;
	void setProjectEnv(const std::string &projectEnv);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getStartBizDate() const;
	void setStartBizDate(const std::string &startBizDate);
	std::string getEndBizDate() const;
	void setEndBizDate(const std::string &endBizDate);
	std::string getDagParameters() const;
	void setDagParameters(const std::string &dagParameters);
	std::string getIncludeNodeIds() const;
	void setIncludeNodeIds(const std::string &includeNodeIds);
	std::string getBizDate() const;
	void setBizDate(const std::string &bizDate);
	std::string getExcludeNodeIds() const;
	void setExcludeNodeIds(const std::string &excludeNodeIds);
	std::string getFlowName() const;
	void setFlowName(const std::string &flowName);
	long getProjectId() const;
	void setProjectId(long projectId);
	std::string getNodeParameters() const;
	void setNodeParameters(const std::string &nodeParameters);

private:
	std::string projectEnv_;
	std::string projectName_;
	std::string startBizDate_;
	std::string endBizDate_;
	std::string dagParameters_;
	std::string includeNodeIds_;
	std::string bizDate_;
	std::string excludeNodeIds_;
	std::string flowName_;
	long projectId_;
	std::string nodeParameters_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_RUNMANUALDAGNODESREQUEST_H_
