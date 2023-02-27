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

#ifndef ALIBABACLOUD_ICE_MODEL_GETLIVETRANSCODEJOBRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_GETLIVETRANSCODEJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ice/ICEExport.h>

namespace AlibabaCloud
{
	namespace ICE
	{
		namespace Model
		{
			class ALIBABACLOUD_ICE_EXPORT GetLiveTranscodeJobResult : public ServiceResult
			{
			public:
				struct Job
				{
					struct StreamInput
					{
						std::string type;
						std::string inputUrl;
					};
					struct OutputStream
					{
						struct StreamInfo
						{
							std::string type;
							std::string outputUrl;
						};
						std::vector<StreamInfo> streamInfos;
					};
					int status;
					int startMode;
					OutputStream outputStream;
					std::string createTime;
					StreamInput streamInput;
					std::string templateName;
					std::string templateType;
					std::string jobId;
					std::string templateId;
					std::string name;
				};


				GetLiveTranscodeJobResult();
				explicit GetLiveTranscodeJobResult(const std::string &payload);
				~GetLiveTranscodeJobResult();
				Job getJob()const;

			protected:
				void parse(const std::string &payload);
			private:
				Job job_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_GETLIVETRANSCODEJOBRESULT_H_