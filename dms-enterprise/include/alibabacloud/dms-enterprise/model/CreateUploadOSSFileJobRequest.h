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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEUPLOADOSSFILEJOBREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEUPLOADOSSFILEJOBREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT CreateUploadOSSFileJobRequest : public RpcServiceRequest {
public:
	struct UploadTarget {
		std::string endpoint;
		std::string bucketName;
		std::string objectName;
	};
	CreateUploadOSSFileJobRequest();
	~CreateUploadOSSFileJobRequest();
	long getTid() const;
	void setTid(long tid);
	std::string getUploadType() const;
	void setUploadType(const std::string &uploadType);
	std::string getFileSource() const;
	void setFileSource(const std::string &fileSource);
	std::string getFileName() const;
	void setFileName(const std::string &fileName);
	UploadTarget getUploadTarget() const;
	void setUploadTarget(const UploadTarget &uploadTarget);

private:
	long tid_;
	std::string uploadType_;
	std::string fileSource_;
	std::string fileName_;
	UploadTarget uploadTarget_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEUPLOADOSSFILEJOBREQUEST_H_
