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

#ifndef ALIBABACLOUD_VS_MODEL_UPLOADDEVICERECORDREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_UPLOADDEVICERECORDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT UploadDeviceRecordRequest : public RpcServiceRequest
			{

			public:
				UploadDeviceRecordRequest();
				~UploadDeviceRecordRequest();

				std::string getSearchCriteria()const;
				void setSearchCriteria(const std::string& searchCriteria);
				std::string getUploadParams()const;
				void setUploadParams(const std::string& uploadParams);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getStreamId()const;
				void setStreamId(const std::string& streamId);
				std::string getUploadId()const;
				void setUploadId(const std::string& uploadId);
				std::string getUploadType()const;
				void setUploadType(const std::string& uploadType);
				std::string getUploadMode()const;
				void setUploadMode(const std::string& uploadMode);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDeviceId()const;
				void setDeviceId(const std::string& deviceId);

            private:
				std::string searchCriteria_;
				std::string uploadParams_;
				std::string showLog_;
				std::string streamId_;
				std::string uploadId_;
				std::string uploadType_;
				std::string uploadMode_;
				long ownerId_;
				std::string deviceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_UPLOADDEVICERECORDREQUEST_H_