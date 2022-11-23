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

#ifndef ALIBABACLOUD_VERVERICA_MODEL_LISTDEPLOYMENTSREQUEST_H_
#define ALIBABACLOUD_VERVERICA_MODEL_LISTDEPLOYMENTSREQUEST_H_

#include <alibabacloud/ververica/VervericaExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ververica {
namespace Model {
class ALIBABACLOUD_VERVERICA_EXPORT ListDeploymentsRequest : public RoaServiceRequest {
public:
	ListDeploymentsRequest();
	~ListDeploymentsRequest();
	std::string getWorkspace() const;
	void setWorkspace(const std::string &workspace);
	std::string getCreator() const;
	void setCreator(const std::string &creator);
	std::string getModifier() const;
	void setModifier(const std::string &modifier);
	std::string getPriority() const;
	void setPriority(const std::string &priority);
	bool getBatchMode() const;
	void setBatchMode(bool batchMode);
	std::string getSortName() const;
	void setSortName(const std::string &sortName);
	std::string getDeploymentId() const;
	void setDeploymentId(const std::string &deploymentId);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getPageIndex() const;
	void setPageIndex(const std::string &pageIndex);
	std::string getSortOrder() const;
	void setSortOrder(const std::string &sortOrder);
	std::string getState() const;
	void setState(const std::string &state);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string workspace_;
	std::string creator_;
	std::string modifier_;
	std::string priority_;
	bool batchMode_;
	std::string sortName_;
	std::string deploymentId_;
	std::string _namespace_;
	std::string pageSize_;
	std::string name_;
	std::string pageIndex_;
	std::string sortOrder_;
	std::string state_;
	std::string status_;
};
} // namespace Model
} // namespace Ververica
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VERVERICA_MODEL_LISTDEPLOYMENTSREQUEST_H_
