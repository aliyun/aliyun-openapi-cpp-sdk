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

#ifndef ALIBABACLOUD_IMM_MODEL_MERGEFIGURECLUSTERSREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_MERGEFIGURECLUSTERSREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT MergeFigureClustersRequest : public RpcServiceRequest {
public:
	MergeFigureClustersRequest();
	~MergeFigureClustersRequest();
	std::string getNotifyTopicEndpoint() const;
	void setNotifyTopicEndpoint(const std::string &notifyTopicEndpoint);
	std::string getDatasetName() const;
	void setDatasetName(const std::string &datasetName);
	std::string getCustomMessage() const;
	void setCustomMessage(const std::string &customMessage);
	std::string getClusterIdFrom() const;
	void setClusterIdFrom(const std::string &clusterIdFrom);
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getNotifyTopicName() const;
	void setNotifyTopicName(const std::string &notifyTopicName);
	std::string getFigureType() const;
	void setFigureType(const std::string &figureType);
	std::string getClusterIdTo() const;
	void setClusterIdTo(const std::string &clusterIdTo);

private:
	std::string notifyTopicEndpoint_;
	std::string datasetName_;
	std::string customMessage_;
	std::string clusterIdFrom_;
	std::string projectName_;
	std::string notifyTopicName_;
	std::string figureType_;
	std::string clusterIdTo_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_MERGEFIGURECLUSTERSREQUEST_H_
