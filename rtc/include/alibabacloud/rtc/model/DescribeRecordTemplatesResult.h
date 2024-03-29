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

#ifndef ALIBABACLOUD_RTC_MODEL_DESCRIBERECORDTEMPLATESRESULT_H_
#define ALIBABACLOUD_RTC_MODEL_DESCRIBERECORDTEMPLATESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rtc/RtcExport.h>

namespace AlibabaCloud
{
	namespace Rtc
	{
		namespace Model
		{
			class ALIBABACLOUD_RTC_EXPORT DescribeRecordTemplatesResult : public ServiceResult
			{
			public:
				struct _Template
				{
					struct Background
					{
						int zOrder;
						float x;
						float y;
						float height;
						float width;
						std::string url;
						int display;
					};
					struct Watermark
					{
						int zOrder;
						float alpha;
						float x;
						float y;
						float height;
						float width;
						std::string url;
						int display;
					};
					struct Watermark1
					{
						int fontSize;
						int zOrder;
						int fontColor;
						float x;
						float y;
						int fontType;
					};
					int fileSplitInterval;
					std::vector<_Template::Watermark1> clockWidgets;
					std::string httpCallbackUrl;
					std::string taskProfile;
					std::string createTime;
					std::string ossBucket;
					int mediaEncode;
					std::vector<std::string> layoutIds;
					std::vector<std::string> formats;
					std::string mnsQueue;
					int delayStopTime;
					std::string name;
					std::string ossFilePrefix;
					bool enableM3u8DateTime;
					std::vector<_Template::Watermark> watermarks;
					std::vector<_Template::Background> backgrounds;
					std::string templateId;
					int backgroundColor;
				};


				DescribeRecordTemplatesResult();
				explicit DescribeRecordTemplatesResult(const std::string &payload);
				~DescribeRecordTemplatesResult();
				long getTotalNum()const;
				long getTotalPage()const;
				std::vector<_Template> getTemplates()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalNum_;
				long totalPage_;
				std::vector<_Template> templates_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RTC_MODEL_DESCRIBERECORDTEMPLATESRESULT_H_