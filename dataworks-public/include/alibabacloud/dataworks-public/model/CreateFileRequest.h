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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEFILEREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEFILEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateFileRequest : public RpcServiceRequest
			{

			public:
				CreateFileRequest();
				~CreateFileRequest();

				int getFileType()const;
				void setFileType(int fileType);
				std::string getDependentNodeIdList()const;
				void setDependentNodeIdList(const std::string& dependentNodeIdList);
				std::string getContent()const;
				void setContent(const std::string& content);
				std::string getProjectIdentifier()const;
				void setProjectIdentifier(const std::string& projectIdentifier);
				long getProjectId()const;
				void setProjectId(long projectId);
				long getStartEffectDate()const;
				void setStartEffectDate(long startEffectDate);
				std::string getCycleType()const;
				void setCycleType(const std::string& cycleType);
				std::string getOwner()const;
				void setOwner(const std::string& owner);
				int getAutoRerunIntervalMillis()const;
				void setAutoRerunIntervalMillis(int autoRerunIntervalMillis);
				std::string getInputList()const;
				void setInputList(const std::string& inputList);
				std::string getRerunMode()const;
				void setRerunMode(const std::string& rerunMode);
				std::string getParaValue()const;
				void setParaValue(const std::string& paraValue);
				int getAutoRerunTimes()const;
				void setAutoRerunTimes(int autoRerunTimes);
				std::string getCronExpress()const;
				void setCronExpress(const std::string& cronExpress);
				long getEndEffectDate()const;
				void setEndEffectDate(long endEffectDate);
				std::string getFileName()const;
				void setFileName(const std::string& fileName);
				bool getStop()const;
				void setStop(bool stop);
				std::string getDependentType()const;
				void setDependentType(const std::string& dependentType);
				std::string getFileFolderPath()const;
				void setFileFolderPath(const std::string& fileFolderPath);
				std::string getFileDescription()const;
				void setFileDescription(const std::string& fileDescription);

            private:
				int fileType_;
				std::string dependentNodeIdList_;
				std::string content_;
				std::string projectIdentifier_;
				long projectId_;
				long startEffectDate_;
				std::string cycleType_;
				std::string owner_;
				int autoRerunIntervalMillis_;
				std::string inputList_;
				std::string rerunMode_;
				std::string paraValue_;
				int autoRerunTimes_;
				std::string cronExpress_;
				long endEffectDate_;
				std::string fileName_;
				bool stop_;
				std::string dependentType_;
				std::string fileFolderPath_;
				std::string fileDescription_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEFILEREQUEST_H_