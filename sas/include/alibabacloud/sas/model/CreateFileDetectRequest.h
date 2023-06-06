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

#ifndef ALIBABACLOUD_SAS_MODEL_CREATEFILEDETECTREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_CREATEFILEDETECTREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT CreateFileDetectRequest : public RpcServiceRequest {
public:
	CreateFileDetectRequest();
	~CreateFileDetectRequest();
	std::string getHashKey() const;
	void setHashKey(const std::string &hashKey);
	std::string getOssKey() const;
	void setOssKey(const std::string &ossKey);
	int getType() const;
	void setType(int type);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getDownloadUrl() const;
	void setDownloadUrl(const std::string &downloadUrl);

private:
	std::string hashKey_;
	std::string ossKey_;
	int type_;
	std::string sourceIp_;
	std::string downloadUrl_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_CREATEFILEDETECTREQUEST_H_
