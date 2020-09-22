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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBETEMPLATERESULT_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBETEMPLATERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT DescribeTemplateResult : public ServiceResult
			{
			public:
				struct TransConfig
				{
					long fps;
					long gop;
					long height;
					std::string id;
					std::string videoCodec;
					long width;
					std::string name;
					long videoBitrate;
				};


				DescribeTemplateResult();
				explicit DescribeTemplateResult(const std::string &payload);
				~DescribeTemplateResult();
				std::string getDescription()const;
				std::string getCreatedTime()const;
				std::string getEndTime()const;
				std::vector<TransConfig> getTransConfigs()const;
				std::string getHlsTs()const;
				std::string getOssBucket()const;
				std::string getStartTime()const;
				long getRetention()const;
				std::string getFileFormat()const;
				std::string getName()const;
				std::string getJpgOnDemand()const;
				std::string getMp4()const;
				std::string getOssFilePrefix()const;
				std::string getFlv()const;
				std::string getType()const;
				std::string getJpgSequence()const;
				std::string getTrigger()const;
				std::string getCallback()const;
				std::string getOssEndpoint()const;
				std::string getJpgOverwrite()const;
				std::string getRegion()const;
				std::string getId()const;
				std::string getHlsM3u8()const;
				long getInterval()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				std::string createdTime_;
				std::string endTime_;
				std::vector<TransConfig> transConfigs_;
				std::string hlsTs_;
				std::string ossBucket_;
				std::string startTime_;
				long retention_;
				std::string fileFormat_;
				std::string name_;
				std::string jpgOnDemand_;
				std::string mp4_;
				std::string ossFilePrefix_;
				std::string flv_;
				std::string type_;
				std::string jpgSequence_;
				std::string trigger_;
				std::string callback_;
				std::string ossEndpoint_;
				std::string jpgOverwrite_;
				std::string region_;
				std::string id_;
				std::string hlsM3u8_;
				long interval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBETEMPLATERESULT_H_