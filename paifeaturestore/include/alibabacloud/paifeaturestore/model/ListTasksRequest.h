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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTTASKSREQUEST_H_
#define ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTTASKSREQUEST_H_

#include <alibabacloud/paifeaturestore/PaiFeatureStoreExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace PaiFeatureStore {
namespace Model {
class ALIBABACLOUD_PAIFEATURESTORE_EXPORT ListTasksRequest : public RoaServiceRequest {
public:
	ListTasksRequest();
	~ListTasksRequest();
	std::string getType() const;
	void setType(const std::string &type);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getObjectType() const;
	void setObjectType(const std::string &objectType);
	std::string getProjectId() const;
	void setProjectId(const std::string &projectId);
	std::string getObjectId() const;
	void setObjectId(const std::string &objectId);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string type_;
	int pageNumber_;
	std::string instanceId_;
	int pageSize_;
	std::string objectType_;
	std::string projectId_;
	std::string objectId_;
	std::string status_;
};
} // namespace Model
} // namespace PaiFeatureStore
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PAIFEATURESTORE_MODEL_LISTTASKSREQUEST_H_
