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

#ifndef ALIBABACLOUD_ICE_MODEL_GETLIVESNAPSHOTTEMPLATERESULT_H_
#define ALIBABACLOUD_ICE_MODEL_GETLIVESNAPSHOTTEMPLATERESULT_H_

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
			class ALIBABACLOUD_ICE_EXPORT GetLiveSnapshotTemplateResult : public ServiceResult
			{
			public:


				GetLiveSnapshotTemplateResult();
				explicit GetLiveSnapshotTemplateResult(const std::string &payload);
				~GetLiveSnapshotTemplateResult();
				std::string getLastModified()const;
				std::string getSequenceFormat()const;
				std::string getType()const;
				int getTimeInterval()const;
				std::string getOverwriteFormat()const;
				std::string getCreateTime()const;
				std::string getTemplateName()const;
				std::string getTemplateId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string lastModified_;
				std::string sequenceFormat_;
				std::string type_;
				int timeInterval_;
				std::string overwriteFormat_;
				std::string createTime_;
				std::string templateName_;
				std::string templateId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_GETLIVESNAPSHOTTEMPLATERESULT_H_