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

#ifndef ALIBABACLOUD_ECD_MODEL_CREATECDSFILEREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_CREATECDSFILEREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT CreateCdsFileRequest : public RpcServiceRequest {
public:
	CreateCdsFileRequest();
	~CreateCdsFileRequest();
	std::string getFileType() const;
	void setFileType(const std::string &fileType);
	std::string getCdsId() const;
	void setCdsId(const std::string &cdsId);
	std::string getConflictPolicy() const;
	void setConflictPolicy(const std::string &conflictPolicy);
	std::string getParentFileId() const;
	void setParentFileId(const std::string &parentFileId);
	std::string getFileName() const;
	void setFileName(const std::string &fileName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getFileLength() const;
	void setFileLength(long fileLength);
	std::string getEndUserId() const;
	void setEndUserId(const std::string &endUserId);
	std::string getFileHash() const;
	void setFileHash(const std::string &fileHash);

private:
	std::string fileType_;
	std::string cdsId_;
	std::string conflictPolicy_;
	std::string parentFileId_;
	std::string fileName_;
	std::string regionId_;
	long fileLength_;
	std::string endUserId_;
	std::string fileHash_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_CREATECDSFILEREQUEST_H_
