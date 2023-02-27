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

#ifndef ALIBABACLOUD_ICE_MODEL_GETLIVESNAPSHOTJOBRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_GETLIVESNAPSHOTJOBRESULT_H_

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
			class ALIBABACLOUD_ICE_EXPORT GetLiveSnapshotJobResult : public ServiceResult
			{
			public:
				struct StreamInput
				{
					std::string type;
					std::string url;
				};
				struct SnapshotOutput
				{
					std::string storageType;
					std::string endpoint;
					std::string bucket;
				};


				GetLiveSnapshotJobResult();
				explicit GetLiveSnapshotJobResult(const std::string &payload);
				~GetLiveSnapshotJobResult();
				std::string getStatus()const;
				std::string getSequenceFormat()const;
				int getTimeInterval()const;
				std::string getCreateTime()const;
				std::string getJobName()const;
				SnapshotOutput getSnapshotOutput()const;
				std::string getCallbackUrl()const;
				std::string getLastModified()const;
				std::string getOverwriteFormat()const;
				StreamInput getStreamInput()const;
				std::string getTemplateName()const;
				std::string getJobId()const;
				std::string getTemplateId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string sequenceFormat_;
				int timeInterval_;
				std::string createTime_;
				std::string jobName_;
				SnapshotOutput snapshotOutput_;
				std::string callbackUrl_;
				std::string lastModified_;
				std::string overwriteFormat_;
				StreamInput streamInput_;
				std::string templateName_;
				std::string jobId_;
				std::string templateId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_GETLIVESNAPSHOTJOBRESULT_H_