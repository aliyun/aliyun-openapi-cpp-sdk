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

#ifndef ALIBABACLOUD_SCHEDULERX2_MODEL_GETJOBINSTANCELISTREQUEST_H_
#define ALIBABACLOUD_SCHEDULERX2_MODEL_GETJOBINSTANCELISTREQUEST_H_

#include <alibabacloud/schedulerx2/Schedulerx2Export.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Schedulerx2 {
namespace Model {
class ALIBABACLOUD_SCHEDULERX2_EXPORT GetJobInstanceListRequest : public RpcServiceRequest {
public:
	GetJobInstanceListRequest();
	~GetJobInstanceListRequest();
	std::string getNamespaceSource() const;
	void setNamespaceSource(const std::string &namespaceSource);
	long getStartTimestamp() const;
	void setStartTimestamp(long startTimestamp);
	int getPageNum() const;
	void setPageNum(int pageNum);
	long getEndTimestamp() const;
	void setEndTimestamp(long endTimestamp);
	long getJobId() const;
	void setJobId(long jobId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	int getStatus() const;
	void setStatus(int status);

private:
	std::string namespaceSource_;
	long startTimestamp_;
	int pageNum_;
	long endTimestamp_;
	long jobId_;
	std::string regionId_;
	int pageSize_;
	std::string groupId_;
	std::string _namespace_;
	int status_;
};
} // namespace Model
} // namespace Schedulerx2
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCHEDULERX2_MODEL_GETJOBINSTANCELISTREQUEST_H_
