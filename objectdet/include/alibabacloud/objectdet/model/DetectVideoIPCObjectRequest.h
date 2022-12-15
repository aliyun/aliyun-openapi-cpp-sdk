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

#ifndef ALIBABACLOUD_OBJECTDET_MODEL_DETECTVIDEOIPCOBJECTREQUEST_H_
#define ALIBABACLOUD_OBJECTDET_MODEL_DETECTVIDEOIPCOBJECTREQUEST_H_

#include <alibabacloud/objectdet/ObjectdetExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Objectdet {
namespace Model {
class ALIBABACLOUD_OBJECTDET_EXPORT DetectVideoIPCObjectRequest : public RpcServiceRequest {
public:
	DetectVideoIPCObjectRequest();
	~DetectVideoIPCObjectRequest();
	bool getFormatResultToJson() const;
	void setFormatResultToJson(bool formatResultToJson);
	long getStartTimestamp() const;
	void setStartTimestamp(long startTimestamp);
	std::string getOssFile() const;
	void setOssFile(const std::string &ossFile);
	bool getCallbackOnlyHasObject() const;
	void setCallbackOnlyHasObject(bool callbackOnlyHasObject);
	std::string getRequestProxyBy() const;
	void setRequestProxyBy(const std::string &requestProxyBy);
	bool getAsync() const;
	void setAsync(bool async);
	std::string getVideoURL() const;
	void setVideoURL(const std::string &videoURL);

private:
	bool formatResultToJson_;
	long startTimestamp_;
	std::string ossFile_;
	bool callbackOnlyHasObject_;
	std::string requestProxyBy_;
	bool async_;
	std::string videoURL_;
};
} // namespace Model
} // namespace Objectdet
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OBJECTDET_MODEL_DETECTVIDEOIPCOBJECTREQUEST_H_
