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

#ifndef ALIBABACLOUD_SCHEDULERX2_MODEL_GETLOGREQUEST_H_
#define ALIBABACLOUD_SCHEDULERX2_MODEL_GETLOGREQUEST_H_

#include <alibabacloud/schedulerx2/Schedulerx2Export.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Schedulerx2 {
namespace Model {
class ALIBABACLOUD_SCHEDULERX2_EXPORT GetLogRequest : public RpcServiceRequest {
public:
	GetLogRequest();
	~GetLogRequest();
	std::string getNamespaceSource() const;
	void setNamespaceSource(const std::string &namespaceSource);
	int getLine() const;
	void setLine(int line);
	long getStartTimestamp() const;
	void setStartTimestamp(long startTimestamp);
	long getEndTimestamp() const;
	void setEndTimestamp(long endTimestamp);
	std::string getJobId() const;
	void setJobId(const std::string &jobId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	int getOffset() const;
	void setOffset(int offset);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	bool getReverse() const;
	void setReverse(bool reverse);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	std::string getJobInstanceId() const;
	void setJobInstanceId(const std::string &jobInstanceId);

private:
	std::string namespaceSource_;
	int line_;
	long startTimestamp_;
	long endTimestamp_;
	std::string jobId_;
	std::string regionId_;
	std::string keyword_;
	int offset_;
	std::string groupId_;
	bool reverse_;
	std::string _namespace_;
	std::string jobInstanceId_;
};
} // namespace Model
} // namespace Schedulerx2
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCHEDULERX2_MODEL_GETLOGREQUEST_H_
