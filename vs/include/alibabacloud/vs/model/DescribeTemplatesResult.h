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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBETEMPLATESRESULT_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBETEMPLATESRESULT_H_

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
			class ALIBABACLOUD_VS_EXPORT DescribeTemplatesResult : public ServiceResult
			{
			public:
				struct _Template
				{
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
					std::string description;
					std::string createdTime;
					std::string endTime;
					std::vector<_Template::TransConfig> transConfigs;
					std::string hlsTs;
					std::string ossBucket;
					std::string startTime;
					long retention;
					std::string fileFormat;
					std::string name;
					std::string jpgOnDemand;
					std::string mp4;
					std::string ossFilePrefix;
					std::string flv;
					std::string type;
					std::string jpgSequence;
					std::string trigger;
					std::string callback;
					std::string ossEndpoint;
					std::string jpgOverwrite;
					std::string region;
					std::string id;
					std::string hlsM3u8;
					long interval;
				};


				DescribeTemplatesResult();
				explicit DescribeTemplatesResult(const std::string &payload);
				~DescribeTemplatesResult();
				long getTotalCount()const;
				long getPageSize()const;
				long getPageNum()const;
				long getPageCount()const;
				std::vector<_Template> getTemplates()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				long pageSize_;
				long pageNum_;
				long pageCount_;
				std::vector<_Template> templates_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBETEMPLATESRESULT_H_