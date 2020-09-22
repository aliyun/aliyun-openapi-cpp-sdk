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

#ifndef ALIBABACLOUD_VS_MODEL_CREATETEMPLATEREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_CREATETEMPLATEREQUEST_H_

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
			class ALIBABACLOUD_VS_EXPORT CreateTemplateRequest : public RpcServiceRequest
			{

			public:
				CreateTemplateRequest();
				~CreateTemplateRequest();

				std::string getHlsTs()const;
				void setHlsTs(const std::string& hlsTs);
				std::string getOssEndpoint()const;
				void setOssEndpoint(const std::string& ossEndpoint);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getOssFilePrefix()const;
				void setOssFilePrefix(const std::string& ossFilePrefix);
				std::string getJpgOverwrite()const;
				void setJpgOverwrite(const std::string& jpgOverwrite);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getJpgOnDemand()const;
				void setJpgOnDemand(const std::string& jpgOnDemand);
				long getRetention()const;
				void setRetention(long retention);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getHlsM3u8()const;
				void setHlsM3u8(const std::string& hlsM3u8);
				std::string getOssBucket()const;
				void setOssBucket(const std::string& ossBucket);
				std::string getTransConfigsJSON()const;
				void setTransConfigsJSON(const std::string& transConfigsJSON);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getTrigger()const;
				void setTrigger(const std::string& trigger);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getJpgSequence()const;
				void setJpgSequence(const std::string& jpgSequence);
				std::string getMp4()const;
				void setMp4(const std::string& mp4);
				std::string getFlv()const;
				void setFlv(const std::string& flv);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getCallback()const;
				void setCallback(const std::string& callback);
				long getInterval()const;
				void setInterval(long interval);
				std::string getFileFormat()const;
				void setFileFormat(const std::string& fileFormat);
				std::string getRegion()const;
				void setRegion(const std::string& region);

            private:
				std::string hlsTs_;
				std::string ossEndpoint_;
				std::string description_;
				std::string ossFilePrefix_;
				std::string jpgOverwrite_;
				std::string startTime_;
				std::string type_;
				std::string jpgOnDemand_;
				long retention_;
				std::string showLog_;
				std::string hlsM3u8_;
				std::string ossBucket_;
				std::string transConfigsJSON_;
				std::string endTime_;
				std::string trigger_;
				long ownerId_;
				std::string jpgSequence_;
				std::string mp4_;
				std::string flv_;
				std::string name_;
				std::string callback_;
				long interval_;
				std::string fileFormat_;
				std::string region_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_CREATETEMPLATEREQUEST_H_