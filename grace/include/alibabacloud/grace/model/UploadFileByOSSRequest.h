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

#ifndef ALIBABACLOUD_GRACE_MODEL_UPLOADFILEBYOSSREQUEST_H_
#define ALIBABACLOUD_GRACE_MODEL_UPLOADFILEBYOSSREQUEST_H_

#include <alibabacloud/grace/GraceExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Grace {
namespace Model {
class ALIBABACLOUD_GRACE_EXPORT UploadFileByOSSRequest : public RoaServiceRequest {
public:
	UploadFileByOSSRequest();
	~UploadFileByOSSRequest();
	std::string getObjectName() const;
	void setObjectName(const std::string &objectName);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getEndpoint() const;
	void setEndpoint(const std::string &endpoint);
	std::string getBucketName() const;
	void setBucketName(const std::string &bucketName);
	std::string getDisplayName() const;
	void setDisplayName(const std::string &displayName);

private:
	std::string objectName_;
	std::string type_;
	std::string endpoint_;
	std::string bucketName_;
	std::string displayName_;
};
} // namespace Model
} // namespace Grace
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GRACE_MODEL_UPLOADFILEBYOSSREQUEST_H_
