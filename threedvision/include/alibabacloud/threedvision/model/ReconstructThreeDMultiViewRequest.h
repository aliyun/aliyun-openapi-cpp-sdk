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

#ifndef ALIBABACLOUD_THREEDVISION_MODEL_RECONSTRUCTTHREEDMULTIVIEWREQUEST_H_
#define ALIBABACLOUD_THREEDVISION_MODEL_RECONSTRUCTTHREEDMULTIVIEWREQUEST_H_

#include <alibabacloud/threedvision/ThreedvisionExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Threedvision {
namespace Model {
class ALIBABACLOUD_THREEDVISION_EXPORT ReconstructThreeDMultiViewRequest : public RpcServiceRequest {
public:
	ReconstructThreeDMultiViewRequest();
	~ReconstructThreeDMultiViewRequest();
	std::string getMode() const;
	void setMode(const std::string &mode);
	std::string getZipFileUrl() const;
	void setZipFileUrl(const std::string &zipFileUrl);
	bool getAsync() const;
	void setAsync(bool async);

private:
	std::string mode_;
	std::string zipFileUrl_;
	bool async_;
};
} // namespace Model
} // namespace Threedvision
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_THREEDVISION_MODEL_RECONSTRUCTTHREEDMULTIVIEWREQUEST_H_
