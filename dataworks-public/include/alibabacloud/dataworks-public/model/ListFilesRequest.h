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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTFILESREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTFILESREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListFilesRequest : public RpcServiceRequest {
public:
	ListFilesRequest();
	~ListFilesRequest();
	std::string getOwner() const;
	void setOwner(const std::string &owner);
	std::string getFileTypes() const;
	void setFileTypes(const std::string &fileTypes);
	bool getNeedContent() const;
	void setNeedContent(bool needContent);
	int getCommitStatus() const;
	void setCommitStatus(int commitStatus);
	bool getNeedAbsoluteFolderPath() const;
	void setNeedAbsoluteFolderPath(bool needAbsoluteFolderPath);
	std::string getProjectIdentifier() const;
	void setProjectIdentifier(const std::string &projectIdentifier);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getFileIdIn() const;
	void setFileIdIn(const std::string &fileIdIn);
	std::string getLastEditUser() const;
	void setLastEditUser(const std::string &lastEditUser);
	std::string getFileFolderPath() const;
	void setFileFolderPath(const std::string &fileFolderPath);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getExactFileName() const;
	void setExactFileName(const std::string &exactFileName);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	long getProjectId() const;
	void setProjectId(long projectId);
	std::string getUseType() const;
	void setUseType(const std::string &useType);
	long getNodeId() const;
	void setNodeId(long nodeId);

private:
	std::string owner_;
	std::string fileTypes_;
	bool needContent_;
	int commitStatus_;
	bool needAbsoluteFolderPath_;
	std::string projectIdentifier_;
	int pageNumber_;
	std::string fileIdIn_;
	std::string lastEditUser_;
	std::string fileFolderPath_;
	int pageSize_;
	std::string exactFileName_;
	std::string keyword_;
	long projectId_;
	std::string useType_;
	long nodeId_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTFILESREQUEST_H_
