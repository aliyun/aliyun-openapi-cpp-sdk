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

#ifndef ALIBABACLOUD_SAS_MODEL_FINDCONTAINERNETWORKCONNECTREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_FINDCONTAINERNETWORKCONNECTREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT FindContainerNetworkConnectRequest : public RpcServiceRequest {
public:
	struct DstNode {
		std::string nodeType;
		std::string appName;
		std::string _namespace;
		std::string podName;
		std::string clusterId;
		std::string string;
		std::vector<std::string> nodeIds;
	};
	struct SrcNode {
		std::string nodeType;
		std::string appName;
		std::string _namespace;
		std::string podName;
		std::string clusterId;
		std::string string;
		std::vector<std::string> nodeIds;
	};
	FindContainerNetworkConnectRequest();
	~FindContainerNetworkConnectRequest();
	DstNode getDstNode() const;
	void setDstNode(const DstNode &dstNode);
	long getStartTime() const;
	void setStartTime(long startTime);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getCriteriaType() const;
	void setCriteriaType(const std::string &criteriaType);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getCurrentPage() const;
	void setCurrentPage(long currentPage);
	SrcNode getSrcNode() const;
	void setSrcNode(const SrcNode &srcNode);

private:
	DstNode dstNode_;
	long startTime_;
	long pageSize_;
	std::string criteriaType_;
	long endTime_;
	long currentPage_;
	SrcNode srcNode_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_FINDCONTAINERNETWORKCONNECTREQUEST_H_
